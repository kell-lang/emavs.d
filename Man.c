#define LED_ON
#define LED_OFF




static void delayMs(uint16_t nMs);
static void initLed(void);
void main()
{
  initLed();
  while(1)
  {
    printf("Set led to on!\r\n");
    LED=LEd_ON;dalayMS(500);
    
    printf("Set led to off!\r\n");
    LED=LEd_OFF;delayMS(500);
  }
}