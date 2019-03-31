// Source: https://gist.github.com/ivcn/227414b3185840434718f7f6c8cbffb1
// It is often called the deadly embrace or the ABBA deadlock:

int main() {
    std::mutex m1;
    std::mutex m2;
    std::thread t1([&m1, &m2] {
        print("1. Acquiring m1.");
        m1.lock();
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        print("1. Acquiring m2");
        m2.lock(); 
    });
    std::thread t2([&m1, &m2] {
        print("2. Acquiring m2");
        m2.lock();
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        print("2. Acquiring m1");
        m1.lock();
    });

    t1.join();
    t2.join();
}
