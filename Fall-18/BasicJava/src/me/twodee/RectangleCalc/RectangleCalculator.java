package me.twodee.RectangleCalc;

import me.twodee.CommandLineApp;

import java.util.Scanner;

public class RectangleCalculator implements CommandLineApp
{

    @Override
    public void run(Scanner scanner)
    {
        System.out.print("Enter rectangle length: ");
        int length = scanner.nextInt();

        System.out.print("Enter rectangle breadth: ");
        int breadth = scanner.nextInt();

        Rectangle rectangle = new Rectangle(length, breadth);
        System.out.println("Rectangle's area: " + rectangle.getArea());
    }
}
