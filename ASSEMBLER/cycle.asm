;тема: Оператор цикла LOOP. Команды условных переходов
;НАЙТИ ЗНАЧЕНИЕ ВЫРАЖЕНИЯ 1-3+5-7+…+(-1)N•(2·N+1),  ПРИ N=4

TITLE Program1  ;название программы 
.MODEL small    ;отводим под стек и под данные по 64Кб
.STACK 100h     ;отмечаем начало сегмента стека
.DATA           ;отмечаем начало сегмента данных
N DW 4			;в переменной N значение 4
.CODE           ;отмечаем начало сегмента кодов

main PROC   
MOV AX, @data   ;копируем адрес 
MOV DS, AX      ;сегмента данных
CLD 			;сброс флага переноса DF в 0
xor AX, AX		;очистка AX
mov BX, N		;занесено в BX число 4			

;МЕТКА L1 суммирование
L1:
push AX         ;положить AX в стек
mov CX, BX		;занесено в СX число 4 из BX
mov AX, 1		;занесено в AX число 1         

;МЕТКА L2 цикл возведения в степень
L2:
mov DX, -1		;занесено в DX число -1         
imul DX     	;знаковое умножение
loop L2         ;если значение в CX не равно 0, повтор цикла, к L2 

;вычисление выражения
mov DX, AX      ;занесено в DX число 1 из AX
push DX			;положить DX в стек
mov AX, 2		;занесено в AX число 2 
imul BX			;знаковое умножение
inc AX			;инкремент AX
pop DX			;извлечь DX из стека
imul DX			;знаковое умножение
mov DX, AX		;занесено в DX число из AX
pop AX			;извлечь AX из стека
add AX, DX		;сложение  AX + DX
dec BX			;декремент BX
jnz L1          ;если значение в BX не равно 0, переход к метке L1
inc AX          ;инкремент AX итоговой суммы           

MOV AX,4C00h    ;выход 
INT 21h         ;из программы
main ENDP   
END main