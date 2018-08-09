package me.twodee;

import me.twodee.ArithmeticOperator.ArithmeticRunner;

import java.util.*;
// Write a program to get the vehicle information: Type, Weight
// Write a class called two wheeler to get the weight of the vehicle.
public class Main {

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        CommandLineApp app = new ArithmeticRunner();
        app.run(scanner);
    }
}
