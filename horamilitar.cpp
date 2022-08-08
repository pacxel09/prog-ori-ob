#include <iostream>

using namespace std;

class Time
{
 private:

    int hour;
    int minute;

 public:

    void setTime(int &x, int &y)
    {
	    while((x > 24) || (y > 60))
        {

            cerr << "\nno es valida la informcaion " << endl;
            cin >> x;
            cin >> y;
        }


        if(x <= 12)
        {
            hour = x;
        }
        else
            hour = x-12;

	    minute = y;
    }

	int getHour()
	{
	    return hour;
	}

	int getMinute()
	{
	    return minute;
	}

	void printTime()
	{
	    cout << "\nla hora es ";
        cout << getHour() << ":" << getMinute();
	}

	char timeOfDay(int &x)
	{
       char timeArray[2]={'A', 'P'};

       if(x < 12)
       {
           return timeArray[0];
       }
       else if(x == 12)
       {
           return timeArray[1];
       }
       else if( x == 24)
       {
           return timeArray[0];
       }
       else
        return timeArray[1];

	}
};


int main()
{
    Time t;

    int h;
    int m;



    cout << "\nla hora por favor. ";
    cin >> h;

    cout << endl;

    cout << "introduce los minutos. ";
    cin >> m;

    cout << endl;

    t.setTime(h, m);

    ;

    ;

    cin.ignore();
    cin.get();

    cout << "Done " << endl;

    t.printTime();

    cout << t.timeOfDay(h) << "m." << endl;

    return 0;
}
