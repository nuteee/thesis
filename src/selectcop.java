/* ....... */
for (Waypoint w : waypoints) {
	if (w instanceof WaypointPolice) {
		Double tmpDistance = mouseClicked.getDistance(new GPSLocation((WaypointPolice) w));
		if (tmpDistance < distance) {
			if (selectedCop != null) {
				selectedCop.setSelected(false);
			}
			if (tmpDistance < 2500) {
				selectedCop = (WaypointPolice) w;
				selectedCop.setSelected(true);
				selected = selectedCop.getId();
				distance = tmpDistance;
			}
		}
	}
}
/* ....... */