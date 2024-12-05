#include"tv.h"

bool Tv::volup()
{
	if (volume < MaxVal)
	{
		volume++;
		return 1;
	}
	else return 0;
}

bool Tv::voldown()
{
	if (volume > MinVal)
	{
		volume--;
		return 1;
	}
	else return 0;
}

void Tv::chanup()
{
	if (channel < maxchannel)
		channel++;
	else channel=1;
}

void Tv::chandown()
{
	if (channel > 1)
		channel--;
	else channel = maxchannel;
}

void Tv::settings() const
{
	cout << "TV is " << (state == Off ? "Off" : "On") << endl;
	if (state == On)
	{
		cout << "Volume setting = " << volume << endl;
		cout << "Channel setting = " << channel << endl;
		cout << "Mode = " << (mode == Antenna ? "antenna" : "cable") << endl;
		cout << "Input = " << (input == TV ? "TV" : "DVD") << endl;
	}
}

bool Tv::set_state(Remote& r)
{
	if (state == Off) return 0;
	else
	{
		r.set_state();
		return 1;
	}
}

void Remote::show_state() const
{
	cout << "State = " << (state == Normal ? "normal" : "interaction") << endl;
}