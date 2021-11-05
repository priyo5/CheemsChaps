#ifndef ENGINE_H
#define ENGINE_H

class Engine {

private:
	int Fuel;
	int used;

public:
	void FireEngine();

	void setDepletionRate();

protected:
	double fuelDepletion();
};

#endif
