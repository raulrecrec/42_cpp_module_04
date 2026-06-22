# CPP Module 04

## Description

CPP Module 04 introduces subtype polymorphism, abstract classes and interface-like behavior in C++.

The project focuses on using inheritance together with `virtual` functions to allow derived classes to redefine behavior from a base class. It also introduces the importance of virtual destructors when deleting derived objects through base class pointers.

## Implemented Exercises

### ex00 — Polymorphism

This exercise implements a basic polymorphic hierarchy using the following classes:

* `Animal`
* `Dog`
* `Cat`
* `WrongAnimal`
* `WrongCat`

`Animal` defines a virtual `makeSound()` function, allowing `Dog` and `Cat` to override it with their own behavior.

The `WrongAnimal` and `WrongCat` classes demonstrate what happens when `makeSound()` is not virtual. When a `WrongCat` object is handled through a `WrongAnimal*`, the base class version of `makeSound()` is called instead of the derived one.

Main concepts covered:

* Inheritance
* Virtual functions
* Runtime polymorphism
* Virtual destructors
* Difference between correct and incorrect polymorphic behavior

### ex01 — Brain

This exercise extends `Dog` and `Cat` by giving each one a dynamically allocated `Brain`.

The `Brain` class stores an array of one hundred ideas:

```cpp
std::string ideas[100];
```

Since `Dog` and `Cat` own a dynamically allocated `Brain`, they must correctly manage memory using the Orthodox Canonical Form.

Main concepts covered:

* Dynamic allocation with `new`
* Deallocation with `delete`
* Deep copy
* Copy constructor
* Copy assignment operator
* Avoiding shallow copies
* Avoiding double delete and memory leaks

Each `Dog` and `Cat` creates its own `Brain` during construction and deletes it during destruction.

Copying a `Dog` or `Cat` creates an independent copy of the `Brain`, instead of copying only the pointer address.

### ex02 — Abstract Class

This exercise turns `Animal` into an abstract class.

The `makeSound()` function becomes pure virtual:

```cpp
virtual void makeSound(void) const = 0;
```

This prevents direct instantiation of `Animal`, while still allowing `Animal*` pointers to refer to `Dog` and `Cat` objects.

Main concepts covered:

* Abstract classes
* Pure virtual functions
* Polymorphic base classes
* Preventing meaningless base class instantiation
* Keeping derived classes usable through base class pointers

`Animal` cannot be instantiated directly anymore, but `Dog` and `Cat` can still be created and used polymorphically.

## Compilation

Each exercise includes its own `Makefile`.

To compile an exercise:

```bash
make
```

To clean object files:

```bash
make clean
```

To remove object files and the executable:

```bash
make fclean
```

To rebuild everything:

```bash
make re
```

## Usage

Run the executable generated inside each exercise directory.

Example:

```bash
./animal
```

or:

```bash
./brain
```

or:

```bash
./animal_abstract
```

depending on the exercise.

## Notes

All code is written in C++98 and compiled with:

```bash
-Wall -Wextra -Werror -std=c++98
```

The project demonstrates why virtual functions and virtual destructors are essential when working with inheritance and polymorphism in C++.
