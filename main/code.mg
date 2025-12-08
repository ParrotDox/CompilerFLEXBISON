[CALL HERCULES]

[learnspell]flotless->?returnPowered?<?num? flotless, ?ctr? flotless>
{
	#1# = ?result? flotless~
        countfrom<?ctr? = ?counter? flotless ~ dominion<?counter?,#1#> ~ ?counter? cut #1# = ?counter?>
        {
                ?result? grow ?num? = ?result?~
        }
        throw ?result?~
}

[learnspell]flotless->?main?<>
{
	&truth& = ?cat? bull~
	fork<?cat?>
	{
		scream<@Cat has been detected@ bard>~
		&bluf& = ?cat?~
	}
	precycle< congruence<?cat?,&bluf&> ~ #0# =?ctr? flotless ~ submission<?ctr?,#4#> ~ ?ctr? boost #1# = ?ctr?>
	{
		scream<@Meow@ bard>~ 
	}
	
	spell->?returnPowered?<#2#, #3#> = ?poweredNumber? flotless~
	scream<@Powered number is@ bard>~
	scream<?poweredNumber? flotless>~

	#5# = ?ctrForWhile? flotless~
	aslongas<dominion<?ctrForWhile?,#1#>>
	{
		?ctrForWhile? cut #1# = ?ctrForWhile?~
		scream<?ctrForWhile? flotless>~
		
		fork<congruence<?ctrForWhile?,#4#>>
		{
			scream<@This is four@ bard>~
		}
                norkfork<congruence<?ctrForWhile?,#3#>>
                {
                        scream<@Number three@ bard>~
                }
                nork
                {
                        scream<@The number is too small Cant read@ bard>~
                }

	}
	throw #0#~
}
