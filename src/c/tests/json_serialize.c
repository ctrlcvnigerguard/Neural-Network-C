#include "../nn.h"

#include <stdio.h>

#include <json-c/json_object.h>

int main(void) {
    register NeuralNetwork *nn = neural_network_new_with_args(5, 25, 1);

    json_object *j = neural_network_serialize(nn);

    const char* data = json_object_to_json_string_ext(j, JSON_C_TO_STRING_PRETTY);
    printf("%s", data);

    neural_network_free(nn);
    return 0;
}