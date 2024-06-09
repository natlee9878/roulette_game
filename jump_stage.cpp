#include <iostream>

void jump_stage(bool* stage_pass[]) {
    // Function that checks if the stage has been passed and turns all prior stages to pass
    for (int stage=4; stage>-1; stage--) {
        if (stage_pass[stage][0] == false) {
            for (int i=(stage-1); i>-1; i--) {
                stage_pass[i][0] = false;
            }
        }
    }
}