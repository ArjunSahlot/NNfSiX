/**
 * Calculates loss using categorical cross entropy loss
 *
 * Associated YT NNFS tutorial: https://www.youtube.com/watch?v=dEXPMQXoiLc
 */

#include <iostream>
#include <cmath>

int main() {
    std::cout.precision(10);

    double softmax_output[] = {0.7, 0.1, 0.2};
    double target_output[] = {1, 0, 0};

    double loss = -(log(softmax_output[0])*target_output[0] +
                    log(softmax_output[1])*target_output[1] + 
                    log(softmax_output[2])*target_output[2]);
    std::cout << loss << std::endl;

    loss = -log(softmax_output[0]);
    std::cout << loss << std::endl;
}
