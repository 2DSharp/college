package me.twodee.CS2005;

import me.twodee.CS2005.InterestCalculationOverriding.InterestCalculator;

import java.util.*;

public class Main {

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        CommandLineApp app = new InterestCalculator();
        app.run(scanner);



    }
}
