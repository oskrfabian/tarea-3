/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package codigo.peso;

import javax.swing.JOptionPane;

/**
 *
 * @author Vaio
 */
public class CodigoPeso {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
       validacion_de_variables variables = new validacion_de_variables();
        double masa= Double.parseDouble(JOptionPane.showInputDialog("ingrese la masa en por kg"));
     variables.setMasa(masa);
        
      // variables.getMasa();
      variables.calcular(masa);
        
        // TODO code application logic here
    }
    
}
