#include <iostream>
using namespace std;


struct Pipe {
    string namePipe;
    double length;
    double diameter;
    bool InRepairs;
};

struct CompressorStation {
    string nameCompressorStation;
    int numberWorkshop;
    int numberWorkshopJob;
    double performance;

};

//считывание с консоли
Pipe InputPipe() {
    Pipe p;
    cout << "Type name pipe: ";
    cin >> p.namePipe;
    cout << "Type pipe length: ";
    cin >> p.length;
    cout << "Type pipe diameter: ";
    cin >> p.diameter;
    cout << "Pipe under repair? ";
    cin >> p.InRepairs;
    return p;
}

CompressorStation InputCS() {
    CompressorStation cs;
    cout << "Type name compressor station: ";
    cin >> cs.nameCompressorStation;
    cout << "Type number Workshop: ";
    cin >> cs.numberWorkshop;
    cout << "Type number Workshop in job: ";
    cin >> cs.numberWorkshopJob;
    cout << "Type station performance: ";
    cin >> cs.performance;
    return cs;
}

//вывод на консоль
void OutputPipe(Pipe p) {
    cout << "Name pipe: " << p.namePipe << "\tLength: " << p.length << "\tDiameter: " << p.diameter << "\tIn repairs: " << p.InRepairs << endl;
}

void OutputCS(CompressorStation cs) {
    cout << "Name CS: " << cs.nameCompressorStation << "\tNumber workshop: " << cs.numberWorkshop << "\tNumber workshop in job: " << cs.numberWorkshopJob << "\tPerformance: " << cs.performance << endl;

}

int main()
{
    Pipe pipe1 = InputPipe();
    OutputPipe(pipe1);

    //EditPipe(pipe1);
    return 0;
    CompressorStation station = InputCS();
    OutputCS(station);
    return 0;

}
