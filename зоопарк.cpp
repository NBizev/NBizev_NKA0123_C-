#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    int age;
public:
    Animal(const std::string& name, int age) : name(name), age(age) {};

    virtual void feed() = 0;
    virtual void drink() = 0;
    virtual void play() = 0;
    virtual void pet() = 0;
    virtual void printInfo() const {
        std::cout << "Имя: " << name << std::endl;
        std::cout << "Возраст: " << age << " лет" << std::endl;
    }
};

class Flamingo : public Animal {
public:
    Flamingo(const std::string& name, int age) : Animal(name, age) {};

    void feed() override {
        std::cout << "Фламинго " << name << " ест." << std::endl;
    }

    void drink() override {
        std::cout << "Фламинго " << name << " пьет." << std::endl;
    }

    void play() override {
        std::cout << "Фламинго " << name << " играет." << std::endl;
    }

    void pet() override {
        std::cout << "Фламинго " << name << " был поглажен." << std::endl;
    }
};

class Lion : public Animal {
public:
    Lion(const std::string& name, int age) : Animal(name, age) {};

    void feed() override {
        std::cout << "Лев " << name << " ест." << std::endl;
    }

    void drink() override {
        std::cout << "Лев " << name << " пьет." << std::endl;
    }

    void play() override {
        std::cout << "Лев " << name << " играет." << std::endl;
    }

    void pet() override {
        std::cout << "Лев " << name << " был поглажен." << std::endl;
    }
};

class Tiger : public Animal {
public:
    Tiger(const std::string& name, int age) : Animal(name, age) {};

    void feed() override {
        std::cout << "Тигр " << name << " ест." << std::endl;
    }

    void drink() override {
        std::cout << "Тигр " << name << " пьет." << std::endl;
    }

    void play() override {
        std::cout << "Тигр " << name << " играет." << std::endl;
    }

    void pet() override {
        std::cout << "Тигр " << name << " был поглажен." << std::endl;
    }
};

int main() {
    Flamingo flamingo("Mr. Pink", 18);
    Lion lion("James", 33);
    Tiger tiger("Roger", 45);

    std::string command;
    std::string animal;

    while (true) {
        std::cout << "Выберите животное (flamingo, lion, tiger) или 'exit' для выхода: ";
        std::cin >> animal;

        if (animal == "exit") {
            break;
        }
        else if (animal == "flamingo") {
            std::cout << "Выбрано фламинго" << std::endl;
            flamingo.printInfo();
            while (true) {
                std::cout << "Введите команду (feed, drink, play, pet) или 'back' для возврата: ";
                std::cin >> command;

                if (command == "back") {
                    break;
                }
                else if (command == "feed") {
                    flamingo.feed();
                }
                else if (command == "drink") {
                    flamingo.drink();
                }
                else if (command == "play") {
                    flamingo.play();
                }
                else if (command == "pet") {
                    flamingo.pet();
                }
                else {
                    std::cout << "Неверная команда! Попробуйте снова." << std::endl;
                }
            }
        }
        else if (animal == "lion") {
            std::cout << "Выбран лев" << std::endl;
            lion.printInfo();
            while (true) {
                std::cout << "Введите команду (feed, drink, play, pet) или 'back' для возврата: ";
                std::cin >> command;

                if (command == "back") {
                    break;
                }
                else if (command == "feed") {
                    lion.feed();
                }
                else if (command == "drink") {
                    lion.drink();
                }
                else if (command == "play") {
                    lion.play();
                }
                else if (command == "pet") {
                    lion.pet();
                }
                else {
                    std::cout << "Неверная команда! Попробуйте снова." << std::endl;
                }
            }
        }
        else if (animal == "tiger") {
            std::cout << "Выбран тигр" << std::endl;
            tiger.printInfo();
            while (true) {
                std::cout << "Введите команду (feed, drink, play, pet) или 'back' для возврата: ";
                std::cin >> command;

                if (command == "back") {
                    break;
                }
                else if (command == "feed") {
                    tiger.feed();
                }
                else if (command == "drink") {
                    tiger.drink();
                }
                else if (command == "play") {
                    tiger.play();
                }
                else if (command == "pet") {
                    tiger.pet();
                }
                else {
                    std::cout << "Неверная команда! Попробуйте снова." << std::endl;
                }
            }
        }
        else {
            std::cout << "Неверное животное! Попробуйте снова." << std::endl;
        }
    }

    return 0;
}
