package me.twodee.CS2005.BasicAWT;

import java.awt.*;

public class EventListenerFrame extends Frame
{
    public EventListenerFrame()
    {
        TextField textField = new TextField();
        textField.setBounds(60, 50, 170, 20);

        Button button = new Button("Click");
        button.setBounds(100, 120, 80, 30);
        button.addActionListener(e -> textField.setText("Hello!"));
        add(textField);
        add(button);
        setSize(300, 300);
        setLayout(null);
        setVisible(true);
    }
}
