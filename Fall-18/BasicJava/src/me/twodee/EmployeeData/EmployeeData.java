package me.twodee.EmployeeData;

import me.twodee.CommandLineApp;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class EmployeeData implements CommandLineApp {

    public static List<Employee> employees = new ArrayList<>();
    @Override
    public void run(Scanner scanner) {

        System.out.println("Employee pay details");
        System.out.println("----------------");

        employees.add(new Employee(1, "Dedipyaman", 50000, 60000, 20000, 10000, 4000));
        employees.add(new Employee(2, "Agni", 25000, 30000, 10000, 10000));
        employees.add(new Employee(3, "John", 30000, 35000, 10000, 5000, 2000));
        employees.add(new Employee(4, "Sean", 40000, 50000, 15000, 10000));
        employees.add(new Employee(5, "Randall", 45000, 60000, 15000, 23000, 3000));

        for(Employee employee : employees) {

            System.out.println("Employee ID: " + employee.getID() + " Name: " + employee.getName() + " Basic Pay:" +
            employee.getBasicPay() + " DA: " + employee.getDA() + " TA: " + employee.getTA() + " HRA: " + employee.getHRA());

            System.out.println("Gross salary: " + employee.getGrossPay());
        }

    }
}
