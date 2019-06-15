/*
Not included:

	page 167: servlet: web.xml
	page 168: schema: spitter-servlet.xml

*/
package com.habuma.spitter.mvc;

import javax.inject.Inject;
import java.util.Map;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import com.habuma.spitter.service.SpitterService;

@Controller
public class HomeController {
	public static final int DEFAULT_SPITTERS_PER_PAGE = 25;

	private SpitterService spitterService;

	@Inject
	public HomeController(SpitterService spitterService) {
		this.spitterService = spitterService;
	}

	@RequestMapping({"/", "/home"})
	public String showHomePage(Map<String, Object> model) {
		model.put("spitters", spitterService.getRecentSpittles(
			DEFAULT_SPITTERS_PER_PAGE));

		/*
			after controller finish its job, DispatcherServlet 
			will use this name to loop up the actual view 
			implementation by consulting a view resolver.
			But first, write a quick unit test to assert 
			HomeController is doing what it's expected to do.

			为什么没有经过 service层 ? 因为这个例子举例是想走通整个
			流程: 这里本来是应该linkTo 对应一个service层的类调用方法，
			然后service返回值给controller，再给view; 
			这里图简单直接return一个值给view.
		*/
		return "home";
	}
}