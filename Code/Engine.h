#ifndef ENGINE_H
#define ENGINE_H

class Engine 
{
	private:
		int Fuel;
		int used;
		int depletion;
		Engine* succ;

	public:
		Engine(int, int);
		int getFuel();
		void deplete();
		int getD();
		void setDepletion(int);
		virtual void setDepletionRate(int d) = 0;
		void setUsed();
		int getUsed();
		int getPossibleDistance();

		// Chain of responsibility
		void setSuccessor(Engine*);
		Engine* getSuccessor();

		virtual int fuelDepletion(int) = 0;
		virtual int fireEngine(int) = 0;
};
#endif
