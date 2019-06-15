// Most remarkable about HomeController, and most springMVC controllers
// is that there's little Spring-specific stuff in it. In fact, if the 
// 3 annotations are stripped away, this would be a POJO.

// From a unit test perspective, this is significant because
// it means HomeController can be tested without having to 
// mock anything or create any Spring-specific objects: it's 
// not that different from the Old-plain java.

// HomeControllerTest shows how HomeController tests are carried out.

/*
	Notice that Unit test and Mockito are 2 most used ways of testing
*/

package com.habuma.spitter.mvc;

import static com.habuma.spitter.mvc.HomeController.*;
import static java.util.Arrays.*;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;

import java.util.HashMap;
import java.util.List;

import org.junit.Test;

import com.habuma.spitter.domain.Spittle;
import com.habuma.spitter.service.SpitterService;

public class HomeControllerTest {

	@Test
	public void shouldDisplayRecentSpittles() {
		List<Spittle> expectedSpittles = 
			asList(new Spittle(), new Spittle(), new Spittle());

		SpitterService SpitterService = mock(SpitterService.class);

		when(SpitterService.getRecentSpittles(DEFAULT_SPITTERS_PER_PAGE)).
			thenReturn(expectedSpittles);

		HomeController controller = new HomeController(SpitterService);

		HashMap<String, Object> model = new HashMap<String, Object>();
		String viewName = controller.showHomePage(model);

		assertEquals("home", viewName);
		assertSame(expectedSpittles, model.get("spitters"));

		verify(SpitterService).getRecentSpittles(DEFAULT_SPITTERS_PER_PAGE);

	}
}