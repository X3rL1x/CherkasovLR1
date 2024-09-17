#include <iostream>

using namespace std;

struct Pipe
{
    string namepipe;

    float lenght;

    float diametr;

    bool repair;

    void AddPipe()
    {

    };

    void ViewAllObjects()
    {

    };

    void RedactPipe()
    {

    };
};

struct NPZ
{
    string namenpz;

    int countfactry;

    int countfactrywork;

    int productivity;

    void AddNPZ()
    {

    };

    void RedactNPZ()
    {

    };
};

void start()
{
    while (true) {
        int c;

        cout << "Choose command" << endl << "1. Add pipe" << endl << "2. Add NPZ" << endl << "3. View all" << endl << "4. Redact pipe" << endl << "5. Redact NPZ" << endl << "6. Save" << endl << "7. Load" << endl << "0. Exit" << endl;
        cin >> c;
        switch(c) {
        case 1:
            break;
        }

    }
}

void Save()
{

}

void Load()
{

}

int main()
{
    Pipe pipe;
    pipe.namepipe = "None";
    pipe.lenght = 0.;
    pipe.diametr = 0.;
    pipe.repair = false;
    NPZ npz;
    npz.namenpz = "None";
    npz.countfactry = 0;
    npz.countfactrywork = 0;
    npz.productivity = 0;
    start();
}

