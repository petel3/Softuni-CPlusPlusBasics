#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios;

int main()
{
    int poolVolume, firstPipeDebit, secondPipeDebit;
    double workerOutHours;
    cin >> poolVolume >> firstPipeDebit >> secondPipeDebit >> workerOutHours;

    double firstPipeLiters = firstPipeDebit * workerOutHours;
    double secondPipeLiters = secondPipeDebit * workerOutHours;

    double poolFilledWhenWorkerOut = firstPipeLiters + secondPipeLiters;
    if (poolVolume < poolFilledWhenWorkerOut)
    {
        double overflowLiters = poolFilledWhenWorkerOut - poolVolume;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "For " << workerOutHours << " hours the pool overflows with " << overflowLiters << " liters." << endl;
    }
    else
    {
        double percentOfFilledPool = (poolFilledWhenWorkerOut / poolVolume) * 100;
        double firstPipePercent = (firstPipeLiters / poolFilledWhenWorkerOut) * 100;
        double secondPipePercent = (secondPipeLiters / poolFilledWhenWorkerOut) * 100;

        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "The pool is " << percentOfFilledPool << "% full.Pipe 1: "
            << firstPipePercent << "% .Pipe 2 : " << secondPipePercent << "%." << endl;
    }
}
