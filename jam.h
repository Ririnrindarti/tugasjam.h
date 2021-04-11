#include <chrono>
#include <ctime>
class myJam {
    public:
       void getDate() {
           auto start  = std::chrono::system_clock::now();
           auto end = std::chrono::system_clock::now();
           std::chrono::duration<double> elapsed_seconds = end-start;
           std::time_t end_time = std::chrono::system_clock::to_time_t(end);
           
           std::cout << std::ctime(&end_time);
       }

       void getJam() {
           time_t currentTime;
           struct tm *localTime;

           time(&currentTime);
           localTime   =  localtime(&currentTime);

           int jam     =  localTime->tm_hour;
           int min     =  localTime->tm_min;

           std::cout << "Jam Sekarang = "<< jam << ":"<< min << " Menit" << "\n" << std::endl;
       }

    private: 
        int jam;
        int menit;
    public:
        // Setter
        void setJam(int pjam) {
            jam  =  pjam;
        }

        int getsetJam() {
            return jam;
        }
};