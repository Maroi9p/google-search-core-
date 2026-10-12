#include <iostream>
#include <string>
void renderImageAnswer() {
std::cout << "[GOOGLE IMAGES]: Наглядная графическая схема процесса:"
<< std::endl;
std::cout << "URL: https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSwwL51-A1L2US0G3a7Eciy1VRNjRRTvfVUFad66Zv3VmbdD5SgLVzcTEkB&s=10" << std::endl;
}
void renderTextAnswer() {
    std::cout << "[РЕЗУЛЬТАТ ПОИСКА]: Нажмите :q! для завершения сессии."
              << std::endl;
}

int main() {
renderTextAnswer();
 std::string query = "как выйти из vim в 2026 году";
 std::cout << "================ GOOGLE SEARCH CORE ================" <<
std::endl;
 std::cout << "Запрос: \"" << query << "\"" << std::endl;
 std::cout << "----------------------------------------------------" <<
std::endl;
 std::cout << "----------------------------------------------------" <<
std::endl;
 renderImageAnswer();
 return 0;
    const std::string query = "как выйти из vim в 2026 году";

    std::cout << "================ GOOGLE SEARCH CORE ================"
              << std::endl;
    std::cout << "Запрос: \"" << query << "\"" << std::endl;
    std::cout << "----------------------------------------------------"
              << std::endl;
    std::cout << "----------------------------------------------------"
              << std::endl;
    renderTextAnswer();

    return 0;
}
