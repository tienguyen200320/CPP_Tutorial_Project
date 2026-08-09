#include <iostream>
#include <fstream>
#include <iomanip>               // std::setw
#include <nlohmann/json.hpp>

int main()
{
    // Mở file JSON có tên "setting.json" để đọc dữ liệu. lui lai 1 level de tim file setting.json - dang o folder build
    // Nếu file không tồn tại hoặc không mở được thì input_file sẽ ở trạng thái lỗi.
    std::ifstream input_file("../setting.json");

    // Đọc và phân tích nội dung JSON từ file vào một đối tượng nlohmann::json.
    // Hàm parse sẽ đọc toàn bộ dữ liệu JSON từ luồng input_file.
    // Ham parse se convert noi dung json thanh object c++
    // vi du {
    //         "name": "Tien"
    //         "age": 30
    //        }
    // se duoc convert thanh object c++ co 2 key la name va age
    // jsonData["name"] == "Tien" va jsonData["age"] == 30
    nlohmann::json jsonData = nlohmann::json::parse(input_file);

    // In đối tượng JSON ra màn hình với định dạng thụt lề 4 khoảng trắng - de doc nhat
    std::cout << std::setw(4) << jsonData << std::endl;
    // // In đối tượng JSON ra màn hình mà không có định dạng thụt lề, tức là in dưới dạng một dòng duy nhất.
    // std::cout << jsonData << std::endl;
    return 0;
}