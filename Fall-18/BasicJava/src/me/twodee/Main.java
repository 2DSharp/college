package me.twodee;

import me.twodee.GradeCalculator.GradeCalculator;

import java.util.*;

public class Main {

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        CommandLineApp app = new GradeCalculator();
        app.run(scanner);
    }
}
