package me.twodee.CS2005.BasicAWT;

import java.awt.*;

public class FirstFrame extends Frame
{
    public FirstFrame()
    {
        Button button = new Button("Click");
        button.setBounds(150, 150, 60, 20);
        setSize(300, 300);
        setLayout(null);
        setVisible(true);
        add(button);
    }
}
