#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // 打印 OpenCV 版本信息
    std::cout << "OpenCV Version: " << CV_VERSION << std::endl;
    
    // 验证基础功能（可选）
    cv::Mat test_image = cv::Mat::zeros(100, 100, CV_8UC3);
    if (test_image.empty()) {
        std::cerr << "Error: Failed to create test image!" << std::endl;
        return -1;
    }
    
    std::cout << "OpenCV test passed! Image size: " 
              << test_image.cols << "x" << test_image.rows << std::endl;
    return 0;
}
