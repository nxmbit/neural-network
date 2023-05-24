#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "include/matrixf_s.h"
#include "include/network.h"
#include "include/dataset.h"
#include "include/training.h"
#include <string.h>

int main() {
    srand(time(NULL));
    dataset_s *dataset = load_data_csv("training_data.csv", 3, 60000);
    neural_network_s *network = create_neural_network(4, (int[]){3,6, 12,16});
    //neural_network_s *network = load_model("model.txt");
    network_train(network, dataset, 10000, 0.1);
    save_model(network, "model.txt");
    printf("\n");
    matrixf_print(network->layers[0]->neurons, "first layer");
    free_dataset(dataset);
    free_neural_network(network);
    return 0;
}