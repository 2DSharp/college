package me.twodee.CS2005.VehicleInformation;

import me.twodee.CS2005.CommandLineApp;

import java.util.Scanner;

public class VehicleInformation implements CommandLineApp
{

    @Override
    public void run(Scanner scanner)
    {
        Vehicle vehicle = new Vehicle("Four wheeler", 1000);
        System.out.println("Vehicle: " + vehicle.getType() + " " + vehicle.getWeight());

        TwoWheeler twoWheeler = new TwoWheeler(100);
        System.out.println("Two wheeler: " + twoWheeler.getWeight());
    }
}
