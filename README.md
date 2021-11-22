<div id="top"></div>
<br />
<div align="center">
  <a href="https://github.com/priyo5/CheemsChaps">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a>

  <h3 align="center">COS 214 Group project</h3>

  <p align="center">
    A GitHub Repo for the CheemsChaps COS 214 group project
    <br />
    <a href="https://github.com/othneildrew/Best-README-Template"><strong>Explore the docs »</strong></a>
    <br />
  </p>
</div>

  <h2>Table of Contents</h2>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
         <li><a href="#built-with">The poject was split into four main sub-tasks</a></li>
         <li><a href="#built-with">3 rockets you can build</a></li>
         <li><a href="#built-with">Launching a simulation</a></li>
        <li><a href="#built-with">Re-using rockets for the next simulation</a></li>
        <li><a href="#built-with">10 Design Patterns Used</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">How to run our program</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>




<!-- ABOUT THE PROJECT -->
# About The Project

For this group project we were tasked with creating a program that builds, tests and launches different types of rockets.
This includes building a rocket type, satellite type and engine type. Cargo can also be added on the rocket to be sent into outer space.

### The poject was split into four main sub-tasks
* Asking the user for flight details (rocket types, destination planet, etc...)
* Building the users desired rocket and setting the details for the flight.
* Launching the rocket as a Simulation.
* (Potentially) Re-using the rocket for another simulation.

### 3 rockets you can build are
* People Rocket: Falcon 9 Rocket, Crew Dragon Spacecraft with a stage 1 Merlin Engine and a stage 2 Vacuum Merlin Engine
* Satellite Rocket: Falcon Heavy Rocket, Dragon Spacecraft with satellite with a stage 1 Merlin Engine and a stage 2 Vacuum Merlin Engine
* Starlink Rocket: Falcon Heavy Rocket, Dragon Spacecraft with satellite with a stage 1 Merlin Engine and a stage 2 Vacuum Merlin Engine

### Launching a simulation
* The user can contiuously modify the rocket and run static fire tests.
* Once a static fire test completes and passes, the rocket will be ready to launch.
* The launch will display the fuel remaining at regular time intervals (after cetrtain distances travelled).
* The rocket will then display whether the goods to be transported have arrived or not.

### Re-using rockets for the next simulation
* The user will be prompted to choose whether to re-use the already built rocket, create a new rocket, or the end the simulation.
* If the user chooses to re-use the rocket, then the simulation will startover with pre-set variables.

### Design Patterns used to model our system

* Builder
* Template Method
* Abstract Factory
* Memento
* Command
* Decorator
* Observer
* State
* Composite
* Chain of Responsibility

*The responsibilities of each design pattern is detailed in the <a href="https://docs.google.com/document/d/1KPRTDBuYREFpHLTE3IBjX0e3plSBI0--/edit?usp=sharing&ouid=118336233054149317239&rtpof=true&sd=true">CheemsChaps.doc</a>*

<!-- GETTING STARTED -->
## How to run our program

This is an example of what instructions to use to set up your project locally.
To get a local copy up and running follow these simple example steps.

### Prerequisites

The code preferably needs to be run on a Linux or Mac operating system that has the following installed
* gcc:
  ```sh
  sudo apt-get install gcc
  ```

* g++:
  ```sh
  sudo apt-get install g++
  ```

### Installation

Here you can also see how you can clone our repo onto your machine

Clone the repo
   ```sh
   git clone https://github.com/priyo5/CheemsChaps
   ```

<!-- USAGE EXAMPLES -->
# Usage

Use this space to show useful examples of how a project can be used. Additional screenshots, code examples and demos work well in this space. You may also link to more resources.

_For more examples, please refer to the [Documentation](https://example.com)_

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- CONTACT -->
## Contact

Daniel Azmanov - [u20441135@tuks.co.za](u20441135@tuks.co.za)

Ruben Brits - [u20463163@tuks.co.za](u20463163@tuks.co.za)

Reece Stephenson - [u20431997@tuks.co.za](u20431997@tuks.co.za)

Kyle Pottinger - [u20660652@tuks.co.za](u20660652@tuks.co.za)

Seyuran Pillay - [u20471582@tuks.co.za](u20471582@tuks.co.za)


Project Link: [https://github.com/priyo5/CheemsChaps](https://github.com/priyo5/CheemsChaps)

<p align="right">(<a href="#top">back to top</a>)</p>
