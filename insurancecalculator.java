import java.util.Scanner;

public class InsuranceCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

      
        String buildingType = sc.nextLine();
        double amount = sc.nextDouble();
        int claims = sc.nextInt();

        double rate = 0;
        double processingCharge = 0;
        double bonusPercent = 0;

        if (buildingType.equalsIgnoreCase("Domestic")) {
            processingCharge = 50;
            
            if (amount < 100000) {
                rate = 0.003;  // 0.3%
            } else {
                rate = 0.0025; // 0.25%
            }
            
          
            if (claims == 0) {
                bonusPercent = 0.10;
            }

        } else if (buildingType.equalsIgnoreCase("Commercial")) {
            processingCharge = 80;

            if (amount < 250000) {
                rate = 0.005;  // 0.5%
            } else {
                rate = 0.0075; // 0.75%
            }

       
            if (claims == 0) {
                bonusPercent = 0.15;
            }
        }

   
        double premium = amount * rate;
        double totalBeforeDiscount = premium + processingCharge;
        double finalPremium = totalBeforeDiscount - (totalBeforeDiscount * bonusPercent);

        
        System.out.printf("%.2f\n", finalPremium);
        
        sc.close();
    }
}
