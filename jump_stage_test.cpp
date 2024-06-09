#include <iostream>

extern void jump_stage(bool*[]);

int main() {
    bool* stage_pass[5];
    int input = 0;
    int stage = 0;

	for (int i=0; i<5; i++) {
		stage_pass[i] = new bool(true);
		std::cout << "Stage " << i+1 << ": " << stage_pass[i][0] << std::endl;
	}
	std::cout << "Enter the stage number you have passed between 1 and 5:" << std::endl;
	std::cin >> input;
	stage = input-1;
	*stage_pass[stage] = false;
	std::cout << "Stage " << input << ": Passed" << std::endl;
	for (int i=0; i<5; i++) {
		std::cout << "Stage " << i+1 << ": " << stage_pass[i][0] << std::endl;
	}
	jump_stage(stage_pass);
	std::cout << "Stages below " << input << ": Passed" << std::endl;
	for (int i=0; i<5; i++) {
		std::cout << "Stage " << i+1 << ": " << stage_pass[i][0] << std::endl;
	}
	// delete
	for (int i=0; i<5; i++) {
		delete stage_pass[i];
	}
    return 0;
}