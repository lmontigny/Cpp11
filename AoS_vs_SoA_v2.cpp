struct Point {
	int x;
	int y;
};

/* Array of structures approach */
//Each struct contains information about an individual ball.
struct Ball {
	Point position;
	Point velocity;
	std::string name;
};

std::vector<Ball> balls;

//Updating is as simple as looping over the array of balls.
void update_positions(std::vector<Ball>& bs) {
	for(auto& b : bs) {
		b.position.x += b.velocity.x;
		b.position.y += b.velocity.y;
	}
}

//If we only care about a particular attribute (in this case, the name) we
//have to load the entire ball into the function, which would be wasteful.
void print_names(const std::vector<Ball>& bs) {
	for(auto& b : bs) {
		std::cout << b.name << '\n';
	}
}

/* Structure of arrays approach */
//The struct consists of arrays of each particular attribute of the ball.
struct Balls {
	int n_balls;
	std::vector<Point> positions;
	std::vector<Point> velocities;
	std::vector<std::string> names;
};

//To iterate over the structure of arrays, we have to iterate over each of the 
//relevant arrays.
void update_positions(Balls& bs) {
	for(int i = 0; i < bs.n_balls; ++i) {
		//Retrieve the information of the ball at this index
		auto *c_position = &bs.positions[i];
		auto *c_velocity = &bs.velocities[i];
		//Do stuff with it
		c_position->x += c_velocity->x;
		c_position->y += c_velocity->y;
	}
};

//If we only care about a particular attribute, we only have to load the 
//relevant arrays, and nothing else.
void print_names(const Balls& bs) {
	for(int i = 0; i < bs.n_balls; ++i) {
		auto *c_name = bs.names[i];
		std::cout << *c_name << '\n';
	}
}
