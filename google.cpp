#include <iostream>
#include <string>

void renderTextAnswer() {
    std::cout << "[РЕЗУЛЬТАТ ПОИСКА]: Нажмите :q! для завершения сессии."
              << std::endl;
}

int main() {
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
