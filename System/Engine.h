#ifndef ENGINE_H
#define ENGINE_H

/// Engine is the Abstract Producr for the Engine Hierarchy
///
///  Defines the Generalisation for the different Engines created by the factorys

class Engine 
{
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
        virtual void refuel() = 0;

		// Chain of responsibility
		void setSuccessor(Engine*);
		Engine* getSuccessor();

		virtual int fuelDepletion(int) = 0;
		virtual int fireEngine(int) = 0;
        void setFuel(int);
private:
    int Fuel;
    int used;
    int depletion;
    Engine* succ;
};
#endif
