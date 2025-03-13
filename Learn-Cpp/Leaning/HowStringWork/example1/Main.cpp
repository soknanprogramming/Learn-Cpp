#include <iostream>  
#include <string>  
#include <stdlib.h>  

int fakemain() {  
   using namespace std::string_literals;  

   std::u32string name0 = U"Cherno"s + U" Hello";  

   const char* name = u8"Cherno";  

   const wchar_t* name2 = L"Cherno";  
   const char16_t* name3 = u"Cherno";  
   const char32_t* name4 = U"Cherno សុខណាន";  

   std::cout << "name0: ";  
   for (char32_t c : name0) std::cout << static_cast<char>(c);  
   std::cout << std::endl;  

   // Print it to console
   std::cout << "name: " << name << std::endl;  
   std::wcout << L"name2: " << name2 << std::endl;  
   std::wcout << L"name3: ";  
   for (char16_t c : std::u16string(name3)) std::wcout << static_cast<wchar_t>(c);  
   std::wcout << std::endl;  
   std::wcout << L"name4: ";  
   for (char32_t c : std::u32string(name4)) std::wcout << static_cast<wchar_t>(c);  
   std::wcout << std::endl;  

   // Add more example
   const char* example = R"(Line1
Line2
Line3
Line4)";

   std::cin.get();

   return 0;  
}