import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.awt.event.*;
import java.util.regex.*;

public class AnalizadorLexicoGUI extends JFrame {

    private JTextArea txtEntrada;
    private JTable tabla;
    private DefaultTableModel modelo;

    public AnalizadorLexicoGUI() {
        setTitle("Analizador Léxico");
        setSize(700, 500);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        // Área de entrada
        txtEntrada = new JTextArea(5, 40);
        JScrollPane scrollEntrada = new JScrollPane(txtEntrada);

        JButton btnAnalizar = new JButton("Analizar");

        // Tabla
        modelo = new DefaultTableModel();
        modelo.addColumn("Tipo");
        modelo.addColumn("Lexema");
        modelo.addColumn("Posición");

        tabla = new JTable(modelo);
        JScrollPane scrollTabla = new JScrollPane(tabla);

        // Panel superior
        JPanel panelTop = new JPanel(new BorderLayout());
        panelTop.add(new JLabel("Ingrese código:"), BorderLayout.NORTH);
        panelTop.add(scrollEntrada, BorderLayout.CENTER);
        panelTop.add(btnAnalizar, BorderLayout.SOUTH);

        add(panelTop, BorderLayout.NORTH);
        add(scrollTabla, BorderLayout.CENTER);

        // Evento botón
        btnAnalizar.addActionListener(e -> analizar());

    }

    private void analizar() {
        modelo.setRowCount(0);

        String codigo = txtEntrada.getText();

        String regex = "(?<NUMERO>\\d+)"
                + "|(?<ID>[a-zA-Z][a-zA-Z0-9]*)"
                + "|(?<OPERADOR>==|[+\\-*/=<>])"
                + "|(?<DELIMITADOR>[(){};])"
                + "|(?<ESPACIO>\\s+)"
                + "|(?<ERROR>.)";

        Pattern patron = Pattern.compile(regex);
        Matcher matcher = patron.matcher(codigo);

        while (matcher.find()) {
            String tipo = "";
            String lexema = matcher.group();
            int posicion = matcher.start();

            if (matcher.group("NUMERO") != null) {
                tipo = "NUMERO";
            } 
            else if (matcher.group("ID") != null) {
                if (lexema.equals("var") || lexema.equals("if") || 
                    lexema.equals("else") || lexema.equals("print")) {
                    tipo = "RESERVADA";
                } else {
                    tipo = "IDENTIFICADOR";
                }
            } 
            else if (matcher.group("OPERADOR") != null) {
                tipo = "OPERADOR";
            } 
            else if (matcher.group("DELIMITADOR") != null) {
                tipo = "DELIMITADOR";
            } 
            else if (matcher.group("ESPACIO") != null) {
                continue;
            } 
            else {
                tipo = "ERROR ❌";
            }

            modelo.addRow(new Object[]{tipo, lexema, posicion});
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            new AnalizadorLexicoGUI().setVisible(true);
        });
    }
}