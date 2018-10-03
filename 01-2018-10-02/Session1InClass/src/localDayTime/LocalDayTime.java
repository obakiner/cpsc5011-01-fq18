package localDayTime;

import java.time.LocalTime;

public class LocalDayTime {
	
	private LocalTime now; 
	
	public LocalDayTime(){
		now = LocalTime.now(); 
	}
	
	public String timeGreeting() {
		
		int hour = now.getHour(); 
		
		if (hour >= 5 && hour < 12){
			return "Good Morning";
		} else if (hour >= 12 && hour < 17) {
			return "Good Afternoon";
		} else if (hour >= 17 && hour < 20) {
			return "Good Evening";
		} else {
			return "Good Night";
		}
			
		
	}
}
