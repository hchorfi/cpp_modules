#include <iomanip>
#include <iostream>

typedef struct Data
{
    int id;
    std::string name;
    std::string phone;
    char    grade;
    bool    action;

}t_data;

uintptr_t serialize(t_data* data)
{
    data->id = 5;
    data->name = "hamza";
    data->phone = "06-00-00-00-00";
    data->grade = 'A';
    data->action = true;
    return reinterpret_cast<uintptr_t>(data);
}

Data* deserialize(uintptr_t raw)
{
    // std::cout << "id :" <<*(reinterpret_cast<int*>(raw)) << "\n";//8
    // std::cout << "name :" <<*(reinterpret_cast<std::string*>(raw + 8)) << "\n";//16
    // std::cout << "phone :" <<*(reinterpret_cast<std::string*>(raw + 32)) << "\n";//16
    // std::cout << "grade :" <<*(reinterpret_cast<char*>(raw + 56)) << "\n";//16
    // std::cout << "action :" <<*(reinterpret_cast<bool*>(raw + 72)) << "\n";//16
    return reinterpret_cast<t_data *>(raw);
}

void print_info(t_data *data)
{
    std::cout << "size of id: " << sizeof(data->id) << " | " << data->id << "\n";
    std::cout << "size of name: " << sizeof(data->name) << " | " << data->name << "\n";
    std::cout << "size of phone: " << sizeof(data->phone) << " | " << data->phone << "\n";
    std::cout << "size of grade: " << sizeof(data->grade) << " | " << data->grade << "\n";
    std::cout << "size of action: " << sizeof(data->action) << " | " << data->action << "\n";
}

int main()
{
    t_data data;

    uintptr_t ptr = serialize(&data);
    print_info(&data);
    std::cout << &data << "size: " << sizeof(data) << " - " << std::hex << ptr << " size: " << sizeof(ptr) << "\n";
    print_info(deserialize(ptr));
}
