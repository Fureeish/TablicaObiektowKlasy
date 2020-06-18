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

Buffer::Buffer() : kanal(ilosc, Channel(dlugosc)) {}

//==============================================


int main()
{
    Buffer buforek;
}
