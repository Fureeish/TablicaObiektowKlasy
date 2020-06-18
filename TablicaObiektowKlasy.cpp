#include <iostream>
#include <vector>

class Channel
{
    std::vector<double> data;

public:
    Channel(const std::size_t dlugosc);
};

Channel::Channel(const std::size_t dlugosc) : data(dlugosc) {}


// ============================================

class Buffer
{
public:
    int		dlugosc{ 48000 };
    int		ilosc{ 5 };
    std::vector<Channel> kanal;

    Buffer();
};

Buffer::Buffer() {
    kanal.reserve(ilosc);
    for (int i = 0; i < ilosc; i++) {
        kanal.emplace_back(dlugosc);
    }
}

//==============================================


int main()
{
    Buffer buforek;
}
