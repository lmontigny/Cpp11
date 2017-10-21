// The memory that have been allocated in the Heap won’t be destroyed. 

int main() {
    // OK
    int * p = new int;
    delete p; 

    // Memory leak
    int * q = new int;
    // no delete
}
