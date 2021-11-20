<<<<<<< HEAD
#ifndef ENGINE_H
#define ENGINE_H

class Engine 
{
	private:
		int Fuel;
		int used;
		int depletion;

	public:
		Engine(int, int);
		void FireEngine();
		int getFuel();
		void deplete();
		int getD();
		void setDepletion(double);
		virtual void setDepletionRate(int d) = 0;

	protected:
		virtual void fuelDepletion() = 0;
};
#endif
=======
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
>>>>>>> main
