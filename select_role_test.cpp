#include <iostream>

extern double* select_role(double*);

int main() {
    double* roles = new double[2]();
    std::string character = "Thief";

    roles = select_role(roles);
    for (int i=0; i<2; i++) {
        if (roles[i] == 1) {
            character = "Thief";
        }
        else if (roles[i] == 2) {
            character = "Detective";
        }
        if (i == 0) {
            std::cout << character << ", ";
        }
        else if (i == 1) {
            std::cout << character << std::endl;
        }
    }

    delete roles;
    return 0;
}
