# Toy-Neural-Network-C [![CodeFactor](https://www.codefactor.io/repository/github/vnepogodin/toy-neural-network-c/badge)](https://www.codefactor.io/repository/github/vnepogodin/toy-neural-network-c)[![Language grade: C/C++](https://img.shields.io/lgtm/grade/cpp/g/vnepogodin/Toy-Neural-Network-C.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/vnepogodin/Toy-Neural-Network-C/context:cpp)[![Codacy Badge](https://app.codacy.com/project/badge/Grade/2a81bbde24c248b5ae434dfad27950ab)](https://www.codacy.com/gh/vnepogodin/Toy-Neural-Network-C/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=vnepogodin/Toy-Neural-Network-C&amp;utm_campaign=Badge_Grade)[![Ubuntu](https://github.com/vnepogodin/Toy-Neural-Network-C/workflows/Ubuntu/badge.svg)](https://github.com/vnepogodin/Toy-Neural-Network-C/actions?query=workflow%3AUbuntu)[![macOS](https://github.com/vnepogodin/Toy-Neural-Network-C/workflows/macOS/badge.svg)](https://github.com/vnepogodin/Toy-Neural-Network-C/actions?query=workflow%3AmacOS)

Port [Toy-Neural-Network-JS](https://github.com/CodingTrain/Toy-Neural-Network-JS) to C++ and C
###### I recomend using C version(it's more safe)

## Examples
Here are some demos running directly on your computer:
* [ColorPredictor](https://github.com/vnepogodin/ColorPredictor)
* [GradientDescent](https://github.com/vnepogodin/GradientDescent)

### Documentation
 For C developers
   * `NeuralNetwork` - The neural network structure
     * `neural_network_predict(nn, input_array)` - Returns the output of a neural network
     * `neural_network_train(nn, input_array, target_array)` - Trains a neural network

 For C++ developers
   * `NeuralNetwork` - The neural network class
     * `predict(input_array)` - Returns the output of a neural network
     * `train(input_array, target_array)` - Trains a neural network

## Libraries used in this project

* [Parsing gigabytes of JSON per second](https://github.com/simdjson/simdjson) used for Json serialize / deserialize in C++.
* [JSON-C](https://github.com/json-c/json-c) used for Json serialize / deserialize in C.

## License

This project is licensed under the terms of the MIT license, see LICENSE.
