package me.twodee;

import me.twodee.SimpleCalculator.Calculator;

import java.util.*;

public class Main {

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        CommandLineApp app = new Calculator();
        app.run(scanner);
    }
}
