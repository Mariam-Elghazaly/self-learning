
public class DisplayTime {

    public static void main(String[] args) {
        long totalMiliSec = System.currentTimeMillis();
        long totalSec= totalMiliSec/1000;
        long currentSec= totalSec%60;
        long totalMin= totalSec/60;
        long currentMin= totalMin%60;
        long totalHours= totalMin/60;
        long currentHours= (totalHours+3)%24;
        
        System.out.println(currentHours+":"+currentMin+":"+currentSec);
        
        
    }
}
