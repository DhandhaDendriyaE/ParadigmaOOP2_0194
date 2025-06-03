#include <iostream>


using namespace std;

class remotelampu{
    private: 
        string saklarNO[10];
    public:
    void setSaklarNo(int i, string value){
        saklarNO[i] = value;
    }
    string getSaklarNo(int i) {
        return saklarNO[i];
    }
};


int main (){
    remotelampu lampuRumah;
    lampuRumah. setSaklarNo(0, "Lampu Teras Rumah");
    lampuRumah. setSaklarNo(1, "Lampu Teras tamu");
    lampuRumah. setSaklarNo(2, "Lampu Teras tidur");
    lampuRumah. setSaklarNo(3, "Lampu Dapur");

    cout << lampuRumah.getSaklarNo(0) << endl;
    cout << lampuRumah.getSaklarNo(1) << endl;
    cout << lampuRumah.getSaklarNo(2) << endl;
    cout << lampuRumah.getSaklarNo(3) << endl;

    return 0;
}