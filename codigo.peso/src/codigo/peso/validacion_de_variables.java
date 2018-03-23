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
public class validacion_de_variables {
   double  peso ;
    double masa ;
    static final double gravedad =9.8; 
     
    public void calcular (double masa ){
        do{
        if (masa > 0){
            
          peso = gravedad*masa;
          
          
          //JOptionPane.WARNING_MESSAGE("");
    JOptionPane.showConfirmDialog(null, "el valor resultado es  fuerza Newton "+peso);
    break;
                 }
        
        else {
           
                JOptionPane.showConfirmDialog(null, "dato valido  ");
           break;
            
        
        }
   //   double masa= Double.parseDouble(JOptionPane.showInputDialog("ingrese la cantodad "));
        } while(masa != 0);
        
        
    }
    
    
    public double getPeso() {
        return peso;
    }

    public void setPeso(double peso) {
        this.peso = peso;
    }

    public double getMasa() {
        
        
        return masa;
    }

    public void setMasa(double masa) {
     /*
        do{
        if (masa == 0)
            
         JOptionPane.showConfirmDialog(null, "dato valido  ");
         
        
        else {
            break;
        
        }
   //   double masa= Double.parseDouble(JOptionPane.showInputDialog("ingrese la cantodad "));
        } while(masa > 0);
*/
     
     double val;
     
     do{
        if (masa > 0){
            
          //peso = gravedad*masa;
          // falta ponele el punto a la cifra 
   // JOptionPane.showConfirmDialog(null, "el valor resultado es  fuerza Newton "+peso);
   JOptionPane.showConfirmDialog(null, "valor es valido");
   val= masa;
    break;
                 }
        
        else {
           
                JOptionPane.showConfirmDialog(null, "dato valido  ");
           break;
            
        
        }
   //   double masa= Double.parseDouble(JOptionPane.showInputDialog("ingrese la cantodad "));
        } while(masa != 0);
        
        this.masa = masa;
    }
    
    
}
