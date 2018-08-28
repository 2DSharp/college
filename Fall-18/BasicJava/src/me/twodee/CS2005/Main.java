package me.twodee.CS2005;

import me.twodee.CS2005.CGPACalculator.CGPACalculator;
import me.twodee.CS2005.RandomClasswork.DummyNumberGen;

import java.util.*;

public class Main {

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        CommandLineApp app = new CGPACalculator();
        app.run(scanner);
    }
}
