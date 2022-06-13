#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <algorithm> // for std::copy
#include <iterator>
#include <matplotlibcpp.h>
#include <Eigen/Dense>

// class DataBuilder
// {
// public:
//     std::vector<std::vector<double>> getData(std::string filename)
//     {
//         std::ifstream file(filename);
//         file.open(filename);
//         std::istream_iterator<double> start(file), end;
//         std::vector<double> numbers(start, end);
//         std::string line;
//         std::vector<std::vector<double>> data;
//         while (std::getline(file, line))
//         {
//             std::istringstream iss(line);
//             std::vector<double> v(std::istream_iterator<double>(iss),
//                                   std::istream_iterator<double>());
//         }
//     }
// };
std::vector<double> getData(std::string filename)
{
    std::ifstream file(filename);
    file.open(filename);
    std::istream_iterator<double> start(file), end;
    std::vector<double> numbers(start, end);
    std::string line;
    std::vector<double>data;
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::vector<double> v(std::istream_iterator<double>(iss),
                              std::istream_iterator<double>());
        data.push_back(v);
    }
    return data;
}

int main()
{
    std::string fileName = "/home/kose/programming/modal_analysis/test.csv";
    std::vector<double> torque;
    std::vector<double> velocity;
    getData(fileName);



    // DataBuilder dataBuilder(fileName);
    // dataBuilder.getData(fileName, torque, velocity);
    // std::cout << "torque: " << torque.size() << std::endl;
    // std::cout << "velocity: " << velocity.size() << std::endl;

    // std::ifstream is;
    // is.open("/home/kose/programming/modal_analysis/20220531_Y_Axis_Pulse_6Nm_10ms.csv");
    // std::istream_iterator<double> start(is), end;
    // std::vector<double> numbers(start, end);

    // std::ifstream is1;
    // is1.open("/home/kose/programming/modal_analysis/20220531_Y_Axis_Pulse_9Nm_5ms.csv");
    // std::istream_iterator<double> start1(is1), end1;
    // std::vector<double> numbers1(start1, end1);

    // std::ifstream is2;
    // is2.open("/home/kose/programming/modal_analysis/20220531_Y_Axis_Pulse_9Nm_10ms_doublet.csv");
    // std::istream_iterator<double> start2(is2), end2;
    // std::vector<double> numbers2(start2, end2);

    // std::ifstream is3;
    // is3.open("/home/kose/programming/modal_analysis/20220531_Y_Axis_Pulse_9Nm_10ms.csv");
    // std::istream_iterator<double> start3(is3), end3;
    // std::vector<double> numbers3(start3, end3);

    // std::ifstream is4;
    // is4.open("/home/kose/programming/modal_analysis/20220531_Y_Axis_Pulse_9Nm_20ms.csv");
    // std::istream_iterator<double> start4(is4), end4;
    // std::vector<double> numbers4(start4, end4);

    // int num_of_data = numbers.size();

    // int num_of_cols = 60;
    // int num_of_rows = num_of_data / num_of_cols;
    // int initial_value = 0;
    // std::vector<std::vector<double>> matrix;
    // matrix.resize(num_of_rows, std::vector<double>(num_of_cols, initial_value));

    // for (int i = 0; i < num_of_data; i++)
    // {
    //     matrix[i / num_of_cols][i % num_of_cols] = numbers[i];
    // }

    // for(int i=0; i<num_of_rows; i++)
    // {
    //     for(int j=0; j<num_of_cols; j++)
    //     {
    //         std::cout << matrix[i][j] << std::endl;
    //     }
    // }

    // double sampleTime = 0.001;
    // Eigen::VectorXd tempx = Eigen::VectorXd::LinSpaced(num_of_rows, sampleTime, double(num_of_rows) * sampleTime);

    // std::vector<double> time;

    // for (int i = 0; i < tempx.size(); i++)
    // {
    //     time.push_back(tempx(i));
    // }

    // Eigen::VectorXd y, z;
    // y = x.array().sin().exp().matrix();
    // z = x.array().cos().exp().matrix();

    // std::vector<double> velocity(num_of_rows);
    // std::vector<double> torque(num_of_rows);

    // for (int i = 0; i < num_of_rows; i++)
    // {
    //     velocity[i] = matrix[i][15] / 10000 * 5 / 60;
    //     torque[i] = matrix[i][21] / 1000 * 2.37;
    // }

    // matplotlibcpp::figure();
    // matplotlibcpp::plot(time, velocity, {{"label", "velocity"}});
    // matplotlibcpp::plot(time, torque, {{"label", "torque"}});

    // matplotlibcpp::xlabel("Time [s]");
    // matplotlibcpp::grid(true);
    // matplotlibcpp::title("sss");
    // matplotlibcpp::legend();
    // matplotlibcpp::show();
}